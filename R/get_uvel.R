# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


#******************************************************************************
# Method for extracting u velocity slot
#******************************************************************************

setGeneric('get_uvel', function(object){    # To define an S4 method, I must create a generic first
  standardGeneric('get_uvel')               # standardGeneric is the S4 equivalent of UseMethod
})

setMethod('get_uvel', signature='turbulence', 
          function(object){
            u_vel <- object@u
            temperature <-object@t
            u_vel <- cbind(u_vel,temperature)
            return(u_vel)
          }
          , sealed=FALSE)
