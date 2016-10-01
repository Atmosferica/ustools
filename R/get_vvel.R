# Code written by Chiara De Falco, Stefano Mandelli, Anna Napoli and Eugenio Thieme.
# For bug segnalation please use https://github.com/Atmosferica/ustools or
# eugen@thieme.it

###################################################################################


#******************************************************************************
# Method for extracting v velocity slot
#******************************************************************************

setGeneric('get_vvel', function(object){    # To define an S4 method, I must create a generic first
  standardGeneric('get_vvel')               # standardGeneric is the S4 equivalent of UseMethod
})

setMethod('get_vvel', signature='turbulence', 
          function(object){
            v_vel <- object@v
            temperature <-object@t
            v_vel <- cbind(v_vel,temperature)
            return(v_vel)
          }
          , sealed=FALSE)

