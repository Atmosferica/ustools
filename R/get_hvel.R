# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


#******************************************************************************
# Method for extracting the slot corresponding 
# to horizontal velocity from class turbulence
#******************************************************************************

setGeneric('get_hvel', function(object){     # To define an S4 method, I must create a generic first
  standardGeneric('get_hvel')                # standardGeneric is the S4 equivalent of UseMethod
})

setMethod('get_hvel', signature='turbulence', 
          function(object){
            h_vel <- object@h_vel
            temperature <- object@t
	    h_vel <- cbind(h_vel,temperature)
            # Checking if slot @h_vel has already been filled with set_hvel
            if(length(object@h_vel)==0) stop('Slot empty! Did you set the value with set_hvel()?')
            return(h_vel)
          }
          , sealed=FALSE)
